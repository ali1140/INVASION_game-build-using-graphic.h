import fitz
import os

def extract_pdf_images(pdf_file, prefix):
    doc = fitz.open(pdf_file)
    output_dir = 'assets'
    img_index = 1
    for page_index in range(len(doc)):
        page = doc[page_index]
        image_list = page.get_images()
        for image_index, img in enumerate(image_list, start=1):
            xref = img[0]
            base_image = doc.extract_image(xref)
            image_bytes = base_image['image']
            image_ext = base_image['ext']
            image_name = f'{prefix}_{img_index}.{image_ext}'
            image_path = os.path.join(output_dir, image_name)
            with open(image_path, 'wb') as f:
                f.write(image_bytes)
            img_index += 1

extract_pdf_images(r'C:\Users\aa807\Downloads\gamee (7).pdf', 'game')
extract_pdf_images(r'C:\Users\aa807\Downloads\Journal_5024221005_Ali Akbar Alhabsy.pdf', 'journal')

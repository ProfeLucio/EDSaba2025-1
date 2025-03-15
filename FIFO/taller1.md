# **Taller: Gestión de Inventario con Arreglos FIFO**

## **Objetivo**
Desarrollar un programa en C que implemente un arreglo tipo FIFO para gestionar el inventario de una tienda. El programa permite registrar productos, actualizar cantidades tras una compra, calcular costos por producto y del inventario total.

---

## **Funcionalidades**

1. **Registrar productos**:
   - Cada producto debe contener:
     - Código único (entero).
     - Nombre (cadena de caracteres).
     - Cantidad (entero).
     - Precio por unidad (entero).

2. **Mostrar productos**:
   - Listar todos los productos con sus datos:
     - Código.
     - Nombre.
     - Cantidad.
     - Precio por unidad.
     - Costo total por producto en el inventario.

3. **Actualizar cantidad tras compra**:
   - Registrar una venta de un producto, actualizando su cantidad en el inventario.

4. **Calcular el costo total del inventario**:
   - Calcular y mostrar el costo total del inventario sumando los costos de todos los productos.

5. **Eliminar un producto del inventario**:
   - Se puede eliminar un producto del inventario solamente si las cantidades son iguales a cero.

---
# **Reglas para la Entrega de Trabajo**

## **1. Participación**
- **Máximo:** 2 personas por trabajo.
- **Obligatorio:** Todos los integrantes deben aparecer en el encabezado del código en comentario con nombre completo.

## **2. Originalidad del Código**
- **Prohibido:** Lógicas específicas iguales o similares entre grupos.
- **Requisito:** Cada grupo debe desarrollar su solución de forma independiente.

## **3. Publicación del Código**
- **Dónde:** En el repositorio individual de cada integrante - GitHub.
- **Cómo:** Asegúrate de subir correctamente tu código.

## **4. Fecha Límite**
- **Día:** Viernes, 21 de marzo de 2025.
- **Hora:** 11:00 PM (hora local).

## **5. Revisión**
- **Dónde:** En la sección de clase.
- **Importante:** Todos los grupos deben asistir para sustentar su trabajo.

## **6. Uso de IA**
- **Permitido:** Solo como referencia.
- **Condición:** Cada persona debe estar 100% capacitada para sustentar su código.


---

## **Restricciones**
1. Utilizar estructuras en C para definir los nodos.
2. Gestionar la memoria dinámica mediante `malloc` para crear nodos y `free` para liberar memoria.
3. Seguir una lógica FIFO para manejar los datos.

---

## **Puntos del Taller**
1. **Definición de estructuras**:
   - Diseñar la estructura del nodo que represente un producto.

2. **Registro de productos**:
   - Implementar la lógica para agregar productos al inventario.

3. **Visualización de productos**:
   - Implementar la función para listar todos los productos con sus datos completos.

4. **Gestión de inventario**:
   - Crear una función que permita registrar la venta de un producto y actualizar su cantidad.

5. **Cálculo de costos**:
   - Implementar la funcionalidad que calcule el costo total del inventario.

6. **Gestión de memoria**:
   - Liberar correctamente la memoria de cada nodo cuando sea necesario.

---
# Rúbrica de Calificación Ajustada

| **Criterio**                | **Puntos** | **Descripción**                                                                 |
|-----------------------------|------------|---------------------------------------------------------------------------------|
| **Definición de estructura** | 10         | Estructura definida correctamente con todos los campos y claridad de diseño.    |
| **Registro de productos**    | 15         | Función totalmente funcional y validada.                                       |
| **Visualización de productos** | 15       | Presentación completa y clara de todos los productos en el inventario.          |
| **Gestión de inventario**     | 20         | Funciones de buscar y modificar con validaciones precisas y sin errores.        |
| **Adicionar productos**       | 10         | Incorporación correcta pero con menos relevancia que buscar y modificar.        |
| **Cálculo de costos**         | 15         | Cálculo eficiente y preciso del costo total del inventario.                     |
| **Eliminar productos**        | 35         | Eliminación solo permitida si las cantidades son cero, con validaciones precisas.|
| **Gestión de memoria**        | 20         | Uso adecuado de memoria sin errores ni fugas.                                   |

**Total: 140 puntos**

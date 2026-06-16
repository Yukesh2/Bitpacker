# Bit Packer & Unpacker in C++

A lightweight, efficient C++ utility demonstrating bitwise manipulation by packing multiple 8-bit unsigned integers (`std::uint8_t`) into a single 32-bit unsigned integer (`std::uint32_t`), and subsequently unpacking them back to their original values.

## 🚀 How It Works

Bit packing is a technique used to optimize memory usage and network bandwidth. Instead of storing or transmitting separate variables, we shift and combine their bits into a single, larger data type.

### Packing Mechanism
1. The first 8-bit value is placed at the lowest byte position (shifted by `0` bits).
2. The second 8-bit value is shifted left by `8` bits.
3. The bitwise OR (`|`) operator merges these shifted bits into a single `std::uint32_t` container.

### Unpacking Mechanism
1. **First Value:** Extracted by applying a bitwise AND mask (`& 0xFF`) to isolate the lowest 8 bits.
2. **Second Value:** Extracted by shifting the packed integer right by `8` bits (`>> 8`) to bring the target bits to the lowest position, then applying the `0xFF` mask.

---

## 🛠️ Features

* **Modern C++ Type Safety:** Utilizes fixed-width integer types (`<cstdint>`) and explicit `static_cast` for safe conversions.
* **Dual Representation Output:** Displays the packed integer in both Standard Decimal and Hexadecimal (`0x`) formats for clear visualization of memory layout.
* **ASCII Prevention:** Explicitly handles `std::uint8_t` printing via integer casting to ensure numeric console output instead of character mapping.

---

## 💻 Code Snippet

```cpp
// Packing two 8-bit bytes into a 32-bit integer
std::uint32_t packed = 0;
packed |= static_cast<std::uint32_t>(first) << 0;
packed |= static_cast<std::uint32_t>(second) << 8;

// Unpacking back to 8-bit bytes
std::uint8_t unpacked1 = packed & 0xFF;
std::uint8_t unpacked2 = (packed >> 8) & 0xFF;

/* Ghidra address: 00785670 */
/* Ghidra symbol: FUN_00785670 */


uint FUN_00785670(uint param_1)

{
  uint local_c;
  
  local_c = (uint)((param_1 & 1) == 1);
  if ((param_1 & 2) == 2) {
    local_c = local_c | 2;
  }
  if ((param_1 & 4) == 4) {
    local_c = local_c | 4;
  }
  if ((param_1 & 8) == 8) {
    local_c = local_c | 8;
  }
  if ((param_1 & 3) == 3) {
    local_c = local_c | 0x10;
  }
  if ((param_1 & 6) == 6) {
    local_c = local_c | 0x20;
  }
  if ((param_1 & 9) == 9) {
    local_c = local_c | 0x40;
  }
  if ((param_1 & 0xc) == 0xc) {
    local_c = local_c | 0x80;
  }
  if ((param_1 & 0xf) == 0xf) {
    local_c = local_c | 0x100;
  }
  if ((param_1 & 0x10) == 0x10) {
    local_c = local_c | 0x200;
  }
  if ((param_1 & 0x16) == 0x16) {
    local_c = local_c | 0x400;
  }
  if ((param_1 & 0x13) == 0x13) {
    local_c = local_c | 0x800;
  }
  if ((param_1 & 0x19) == 0x19) {
    local_c = local_c | 0x1000;
  }
  if ((param_1 & 0x1c) == 0x1c) {
    local_c = local_c | 0x2000;
  }
  if ((param_1 & 0x800) == 0x800) {
    local_c = local_c | 0x4000;
  }
  if ((param_1 & 0x1000) == 0x1000) {
    local_c = local_c | 0x8000;
  }
  if ((param_1 & 0x2000) == 0x2000) {
    local_c = local_c | 0x10000;
  }
  if ((param_1 & 0x4000) == 0x4000) {
    local_c = local_c | 0x20000;
  }
  if ((param_1 & 0x8000) == 0x8000) {
    local_c = local_c | 0x40000;
  }
  return local_c;
}


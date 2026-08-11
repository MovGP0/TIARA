/* Ghidra address: 0060f580 */
/* Ghidra symbol: FUN_0060f580 */


uint FUN_0060f580(uint param_1)

{
  uint uVar1;
  uint local_c;
  
  local_c = (uint)((param_1 & 8) == 8);
  if ((param_1 & 0x400) == 0x400) {
    local_c = local_c | 2;
  }
  if ((param_1 & 1) == 1) {
    local_c = local_c | 4;
  }
  if ((param_1 & 0x2000) == 0x2000) {
    local_c = local_c | 8;
  }
  if ((param_1 & 0x8000) == 0x8000) {
    local_c = local_c | 0x10;
  }
  if ((param_1 & 0x4000) == 0x4000) {
    local_c = local_c | 0x20;
  }
  if ((param_1 & 0x40) == 0x40) {
    local_c = local_c | 0x40;
  }
  if ((param_1 & 0x200) == 0x200) {
    local_c = local_c | 0x80;
  }
  uVar1 = local_c | 0x100;
  if ((param_1 & 0x10000) == 0x10000) {
    uVar1 = local_c | 0x300;
  }
  local_c = uVar1;
  if ((param_1 & 0x100) == 0x100) {
    local_c = local_c | 0x400;
  }
  if ((param_1 & 0x800) == 0x800) {
    local_c = local_c | 0x800;
  }
  if ((param_1 & 2) == 2) {
    local_c = local_c | 0x1000;
  }
  if ((param_1 & 0x20000) == 0x20000) {
    local_c = local_c | 0x2000;
  }
  if ((param_1 & 0x20) == 0x20) {
    local_c = local_c | 0x4000;
  }
  uVar1 = local_c | 0x8000;
  if ((param_1 & 4) == 4) {
    uVar1 = local_c | 0x18000;
  }
  local_c = uVar1;
  if ((param_1 & 0x10) == 0x10) {
    local_c = local_c | 0x20000;
  }
  if ((param_1 & 0x100000) == 0x100000) {
    local_c = local_c | 0x40000;
  }
  if ((param_1 & 0x80000) == 0x80000) {
    local_c = local_c | 0x80000;
  }
  if ((param_1 & 0x200000) == 0x200000) {
    local_c = local_c | 0x100000;
  }
  if ((param_1 & 0x80) == 0x80) {
    local_c = local_c | 0x200000;
  }
  if ((param_1 & 0x40000) == 0x40000) {
    local_c = local_c | 0x400000;
  }
  if ((param_1 & 0x800000) == 0x800000) {
    local_c = local_c | 0x800000;
  }
  return local_c;
}


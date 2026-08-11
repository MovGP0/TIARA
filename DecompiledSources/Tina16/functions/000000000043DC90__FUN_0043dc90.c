/* Ghidra address: 0043dc90 */
/* Ghidra symbol: FUN_0043dc90 */


uint FUN_0043dc90(UUID *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = UuidCreate(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar2;
}


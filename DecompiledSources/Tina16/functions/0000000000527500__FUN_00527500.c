/* Ghidra address: 00527500 */
/* Ghidra symbol: FUN_00527500 */


/* WARNING: Removing unreachable block (ram,0x00527506) */

uint FUN_00527500(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = cpuid_Version_info(1);
  uVar2 = *(uint *)(lVar1 + 0xc);
  uVar3 = 3;
  if ((uVar2 & 1) != 0) {
    uVar3 = 7;
  }
  if ((uVar2 & 0x200) != 0) {
    uVar3 = uVar3 | 8;
  }
  if ((uVar2 & 0x80000) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((uVar2 & 0x100000) != 0) {
    uVar3 = uVar3 | 0x20;
  }
  if ((uVar2 & 0x800000) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar2 & 0x2000000) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar2 & 2) != 0) {
    uVar3 = uVar3 | 0x100;
  }
  return uVar3;
}


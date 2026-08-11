/* Ghidra address: 008296f0 */
/* Ghidra symbol: FUN_008296f0 */


undefined1 FUN_008296f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if ((*(uint *)(*(longlong *)(param_1 + 0xf0) + 0xa4) & 0x8000) != 0) {
    for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x78);
        (lVar3 != 0 && (*(char *)(lVar3 + 0x478) == '\0')); lVar3 = *(longlong *)(lVar3 + 0x78)) {
    }
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x478) != '\0')) &&
       (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_007ee548), cVar1 == '\0')) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


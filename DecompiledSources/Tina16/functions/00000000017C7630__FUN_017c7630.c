/* Ghidra address: 017c7630 */
/* Ghidra symbol: FUN_017c7630 */


undefined8 FUN_017c7630(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  bVar3 = false;
  uVar5 = 0;
  *param_2 = 0;
  *param_3 = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x410);
    lVar2 = *(longlong *)(param_1 + 0x408);
    if ((*(int *)(lVar2 + 0x10) <= (int)uVar1) || (bVar3)) break;
    if (*(uint *)(lVar2 + 0x10) <= uVar1) {
      FUN_00594f90();
    }
    *param_3 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar1 * 8);
    if ((*(char *)(*param_3 + 0x3dc) == '\0') || (*(char *)(*param_3 + 0x3f9) != '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar4 = (**(code **)(*(longlong *)*param_3 + 0x210))((longlong *)*param_3,0);
    *param_2 = uVar4;
    if (bVar3) {
      uVar5 = 1;
    }
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
  }
  return uVar5;
}


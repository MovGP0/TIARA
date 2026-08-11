/* Ghidra address: 00a9b900 */
/* Ghidra symbol: FUN_00a9b900 */


void FUN_00a9b900(longlong param_1,longlong *param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*param_2 != 0) {
    lVar2 = 0;
    if (*(longlong *)(*param_2 + 0x108) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x108) + -8);
    }
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)*param_2 + 0xd0))((longlong *)*param_2,param_3);
      bVar1 = *(byte *)(*param_2 + 0x128);
      if (bVar1 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x1cU) != 0;
      }
      else {
        bVar3 = false;
      }
      if ((((!bVar3) && (*(int *)(*param_2 + 0x6c) == 0)) && (*(char *)(*param_2 + 0x110) == '\0'))
         && (*(char *)(*param_2 + 0x61) == '\0')) {
        FUN_00ab3f00(*param_2);
        lVar2 = *param_2;
        *param_2 = 0;
        FUN_00410f20(lVar2);
        return;
      }
    }
    FUN_004ae7e0(param_1,*param_2);
    FUN_00ac37a0(*param_2,*(undefined8 *)(param_1 + 0x20));
  }
  return;
}


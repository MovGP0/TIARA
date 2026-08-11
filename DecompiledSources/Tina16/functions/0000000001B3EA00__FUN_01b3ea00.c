/* Ghidra address: 01b3ea00 */
/* Ghidra symbol: FUN_01b3ea00 */


longlong * FUN_01b3ea00(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_60 = param_2;
  local_58 = param_3;
  if (*(longlong *)(param_2 + 1000) == 0) {
    FUN_00419430(param_1,&DAT_004066f0);
  }
  else {
    iVar1 = FUN_019954d0(param_2);
    FUN_00419260(param_1,&DAT_004066f0,1,(longlong)(iVar1 + 1));
    iVar1 = 0;
    if (*param_1 != 0) {
      iVar1 = (int)*(undefined8 *)(*param_1 + -8);
    }
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        *(int *)(*param_1 + (longlong)iVar3 * 4) = iVar3;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar3 = 0;
    iVar1 = *(int *)(*(longlong *)(local_60 + 1000) + 0x10);
    if (-1 < iVar1 + -1) {
      do {
        piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(local_60 + 1000),iVar3);
        (**(code **)(*local_58 + 0x18))(local_58,&local_30,*piVar2);
        if (((local_30 == 0) &&
            ((**(code **)(*local_58 + 0x18))(local_58,&local_38,piVar2[1]), local_38 == 0)) ||
           (((**(code **)(*local_58 + 0x18))(local_58,&local_40,*piVar2), local_40 != 0 &&
            ((**(code **)(*local_58 + 0x18))(local_58,&local_48,piVar2[1]), local_48 != 0)))) {
          FUN_01b3e990(auStack_88,*(undefined4 *)(*param_1 + (longlong)piVar2[1] * 4),
                       *(undefined4 *)(*param_1 + (longlong)*piVar2 * 4));
        }
        else {
          (**(code **)(*local_58 + 0x18))(local_58,&local_50,*piVar2);
          if (local_50 == 0) {
            FUN_01b3e990(auStack_88,*(undefined4 *)(*param_1 + (longlong)*piVar2 * 4),
                         *(undefined4 *)(*param_1 + (longlong)piVar2[1] * 4));
          }
          else {
            FUN_01b3e990(auStack_88,*(undefined4 *)(*param_1 + (longlong)piVar2[1] * 4),
                         *(undefined4 *)(*param_1 + (longlong)*piVar2 * 4));
          }
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_50,5);
  return param_1;
}


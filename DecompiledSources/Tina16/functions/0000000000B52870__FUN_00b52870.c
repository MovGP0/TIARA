/* Ghidra address: 00b52870 */
/* Ghidra symbol: FUN_00b52870 */


void FUN_00b52870(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  FUN_00b4dd10(param_1,local_res10[0]);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x10);
    iVar2 = FUN_00b4e330();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_00b4fc70(uVar1,iVar5);
        if (*(short *)(lVar3 + 0x4a) == *(short *)(param_1 + 0x3e)) {
          plVar4 = (longlong *)FUN_00b4fc70(uVar1,iVar5);
          (**(code **)(*plVar4 + 0xb0))(plVar4,local_res10[0]);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414520(local_res10);
  return;
}


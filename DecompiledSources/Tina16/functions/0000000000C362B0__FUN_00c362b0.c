/* Ghidra address: 00c362b0 */
/* Ghidra symbol: FUN_00c362b0 */


void FUN_00c362b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x4b) == '\0') {
    iVar2 = FUN_00c1aa10(param_1[10]);
    if (iVar2 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
      iVar2 = FUN_00c1aa10(param_1[10]);
      if ((iVar2 == 1) || ((char)param_1[9] == '\0')) {
        cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
        if (cVar1 == '\0') {
          uVar4 = FUN_00c2fce0(param_1[10],0);
          cVar1 = FUN_00c2a4a0(uVar4);
          if (cVar1 != '\0') {
            FUN_005fdcb0(param_2[0x10],0);
            uVar3 = FUN_00c36110(param_1);
            FUN_005fdab0(param_2[0x10],uVar3);
            (**(code **)(*param_2 + 0xa8))(param_2,param_3);
          }
        }
        uVar4 = FUN_00c2fce0(param_1[10],0);
        uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
        local_38 = 0;
        FUN_00c2c800(uVar4,param_2,param_3,uVar3);
      }
      else {
        if (param_1[0x1c] == 0) {
          lVar5 = (**(code **)(*param_1 + 0xe8))(param_1);
          param_1[0x1c] = lVar5;
        }
        (**(code **)(*(longlong *)param_1[0x1c] + 0x70))((longlong *)param_1[0x1c],param_2,param_3);
      }
      *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
    }
  }
  return;
}


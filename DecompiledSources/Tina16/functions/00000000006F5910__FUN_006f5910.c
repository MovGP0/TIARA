/* Ghidra address: 006f5910 */
/* Ghidra symbol: FUN_006f5910 */


void FUN_006f5910(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_28 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  if (param_3 != '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db5e0(uVar3);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(local_20,uVar3);
      cVar1 = (**(code **)(*local_20[0] + 0x88))(local_20[0]);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_28,uVar3);
        (**(code **)(*local_28 + 0x58))(local_28);
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db1f0(uVar3);
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
        cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,3);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db2d0(uVar3);
        }
      }
    }
  }
  if (param_1[0xe8] != 0) {
    (*(code *)param_1[0xe8])(param_1[0xe9],param_1,param_2,param_3);
  }
  FUN_00417840(&local_28,&DAT_00484dc8,2);
  return;
}


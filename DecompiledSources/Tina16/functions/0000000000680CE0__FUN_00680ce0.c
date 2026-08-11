/* Ghidra address: 00680ce0 */
/* Ghidra symbol: FUN_00680ce0 */


void FUN_00680ce0(longlong *param_1,short *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_28 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  FUN_00659710(param_1,param_2,param_3);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if ((*param_2 == 0x2e) || ((*param_2 == 0x2d && ((param_3 & 1) != 0)))) {
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(local_20,uVar3);
      cVar1 = (**(code **)(*local_20[0] + 0x48))(local_20[0]);
      if (cVar1 == '\0') {
        *param_2 = 0;
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_28,uVar3);
        (**(code **)(*local_28 + 0x58))(local_28);
      }
    }
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,4);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db850(uVar3);
    }
  }
  FUN_00417840(&local_28,&DAT_00484dc8,2);
  return;
}


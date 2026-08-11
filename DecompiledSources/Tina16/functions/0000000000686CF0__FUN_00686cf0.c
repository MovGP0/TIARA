/* Ghidra address: 00686cf0 */
/* Ghidra symbol: FUN_00686cf0 */


void FUN_00686cf0(longlong *param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_18;
  longlong *local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = (longlong *)0x0;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
    if (cVar2 != '\0') {
      iVar1 = *param_2;
      if (iVar1 == 0x201) {
        if ((*(char *)((longlong)param_1 + 0x54a) == '\x01') && (param_3 != param_1[0x9f])) {
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(&local_10,uVar4);
          cVar2 = (**(code **)(*local_10 + 0x48))(local_10);
          goto joined_r0x00686dbf;
        }
      }
      else if ((iVar1 == 0x300) || (iVar1 - 0x302U < 3)) {
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_18,uVar4);
        cVar2 = (**(code **)(*local_18 + 0x48))(local_18);
joined_r0x00686dbf:
        if (cVar2 == '\0') goto LAB_00686e04;
      }
    }
  }
  FUN_00684340(param_1,param_2,param_3,param_4);
LAB_00686e04:
  FUN_00417840(&local_18,&DAT_00484dc8,2);
  return;
}


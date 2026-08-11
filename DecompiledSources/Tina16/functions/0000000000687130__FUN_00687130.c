/* Ghidra address: 00687130 */
/* Ghidra symbol: FUN_00687130 */


void FUN_00687130(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
    if (cVar1 != '\0') {
      if (*param_2 == 0x111) {
        if (*(short *)((longlong)param_2 + 10) == 1) {
          uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(local_20,uVar3);
          cVar1 = (**(code **)(*local_20[0] + 0x48))(local_20[0]);
          if (cVar1 == '\0') {
            if (*(char *)((longlong)param_1 + 0x54a) != '\x01') {
              uVar3 = FUN_0065b870(param_1);
              thunk_FUN_0413e052(uVar3,0x14f,0,0);
            }
            goto LAB_00687310;
          }
        }
      }
      else if (*param_2 == 0x14f) {
        if (*(longlong *)(param_2 + 2) == 0) {
          uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(&local_30,uVar3);
          cVar1 = (**(code **)(*local_30 + 0x88))(local_30);
          if (cVar1 == '\0') {
            uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
            FUN_004db130(&local_38,uVar3);
            (**(code **)(*local_38 + 0x50))(local_38);
          }
        }
        else {
          uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(&local_28,uVar3);
          (**(code **)(*local_28 + 0x48))(local_28);
        }
      }
    }
  }
  if ((((*param_2 - 0xbd32U < 7) && (*PTR_DAT_02003210 == '\0')) &&
      (*(byte *)((longlong)param_1 + 0x54a) < 2)) && (param_1[0xf] != 0)) {
    uVar3 = FUN_005fdb10(*(undefined8 *)(param_1[0xf] + 0x330));
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  else {
    FUN_006847b0(param_1,param_2);
  }
LAB_00687310:
  FUN_00417840(&local_38,&DAT_00484dc8,4);
  return;
}


/* Ghidra address: 00af2f50 */
/* Ghidra symbol: FUN_00af2f50 */


void FUN_00af2f50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  short *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = (short *)0x0;
  local_40[0] = 0;
  local_48 = 0;
  if (*(int *)((longlong)param_1 + 0x4cc) != 0) {
    iVar1 = (**(code **)(*(longlong *)param_1[0xee] + 0x28))();
    local_6c = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*(longlong *)param_1[0xee] + 0x18))
                  ((longlong *)param_1[0xee],local_40,local_6c);
        iVar5 = *(int *)(*(longlong *)(param_1[0x116] + 600) + 0x10);
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            uVar3 = FUN_00a94970(*(undefined8 *)(param_1[0x116] + 600),iVar4);
            FUN_00a94740(uVar3,&local_50);
            if ((local_50 == 0) || (FUN_00a94740(uVar3,&local_58), *local_58 != 0x23)) {
              FUN_00a94740(uVar3,&local_68);
              (**(code **)(*param_1 + 0x448))(param_1,&local_48,local_68,0);
            }
            else {
              FUN_00a94740(uVar3,&local_60);
              FUN_00416ba0(&local_48,param_1[0x117],local_60);
            }
            iVar2 = FUN_0043e420(local_40[0],local_48);
            if (iVar2 == 0) {
              FUN_00a945d0(uVar3,1);
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6c = local_6c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_68,6);
  return;
}


/* Ghidra address: 00cad470 */
/* Ghidra symbol: FUN_00cad470 */


undefined2 FUN_00cad470(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *local_res10 [3];
  undefined8 local_30;
  undefined2 *local_28;
  longlong local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = (undefined2 *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00875240(&local_30,local_res10[0],*(undefined8 *)(param_1 + 0x150),3);
  FUN_0041b840(local_res10,local_30);
  iVar3 = (**(code **)(*local_res10[0] + 0xd8))(local_res10[0],2);
  FUN_00419260(&local_20,&DAT_0086e978,1,(longlong)iVar3);
  FUN_00419260(&local_28,&DAT_0086e9b8,1,2);
  if ((0 < iVar3) && (iVar6 = 1, 0 < iVar3)) {
    do {
      uVar2 = FUN_00cad690(param_1);
      *(undefined1 *)(local_20 + (iVar6 + -1)) = uVar2;
      iVar4 = (**(code **)(*local_res10[0] + 0xb0))(local_res10[0],local_20,0,iVar6,&local_28,0);
      if (0 < iVar4) {
        iVar5 = 0;
        iVar7 = iVar4;
        if (-1 < iVar4 + -1) {
          do {
            if (local_28[iVar5] == -3) {
              iVar4 = 0;
              break;
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (0 < iVar4) break;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = *local_28;
  FUN_0041b800(&local_30);
  FUN_00419430(&local_28,&DAT_0086e9b8);
  FUN_00419430(&local_20,&DAT_0086e978);
  FUN_0041b800(local_res10);
  return uVar1;
}


/* Ghidra address: 00728b10 */
/* Ghidra symbol: FUN_00728b10 */


uint FUN_00728b10(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  longlong *local_res10 [3];
  uint local_44;
  undefined8 local_40 [2];
  longlong local_30;
  longlong *local_28;
  uint local_20;
  int local_1c;
  
  local_40[0] = 0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  plVar2 = (longlong *)FUN_00728d30(param_1);
  (**(code **)(*plVar2 + 0x90))(plVar2);
  local_44 = (**(code **)(*local_res10[0] + 0x48))(local_res10[0],&local_28);
  if ((local_44 & 0x80000000) == 0) {
    local_44 = (**(code **)(*local_res10[0] + 0x38))(local_res10[0],&local_20);
    if ((local_44 & 0x80000000) == 0) {
      FUN_00419260(&local_30,&LAB_00728ac8,1,local_20);
      uVar3 = FUN_0041b800(local_30);
      local_44 = (**(code **)(*local_28 + 0x18))(local_28,local_20,uVar3,&local_1c);
      if (((local_44 & 0x80000000) == 0) && (iVar1 = 0, iVar5 = local_1c, -1 < local_1c + -1)) {
        do {
          pcVar4 = (code *)FUN_00411550(param_1,0xffe6);
          (*pcVar4)(param_1,*(undefined8 *)(local_30 + (longlong)iVar1 * 8),param_1 + 0xa0);
          plVar2 = (longlong *)FUN_00728d30(param_1);
          (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0xa0));
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    plVar2 = (longlong *)FUN_00728d30(param_1);
    iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (0 < iVar5) {
      plVar2 = (longlong *)FUN_00728d30(param_1);
      (**(code **)(*plVar2 + 0x18))(plVar2,local_40,0);
      FUN_00414ad0(param_1 + 0xa0,local_40[0]);
    }
  }
  FUN_00414480(local_40);
  FUN_00419430(&local_30,&LAB_00728ac8);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_res10);
  return local_44;
}


/* Ghidra address: 016009b0 */
/* Ghidra symbol: FUN_016009b0 */


undefined1 FUN_016009b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 local_61;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_29;
  
  local_48 = 0;
  local_40[0] = 0;
  local_61 = 0;
  *param_4 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  local_4c = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,local_4c);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        FUN_019af5f0(param_1,local_40);
        cVar2 = FUN_015f5c70(local_40[0],plVar4,param_2,param_3,&local_29);
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          uVar1 = *(undefined8 *)(plVar4[0x35] + 8);
          FUN_019af5f0(param_1,&local_48);
          FUN_019af590(uVar1,local_48);
          cVar2 = FUN_016009b0(uVar1,param_2,param_3,param_4);
        }
        if (cVar2 != '\0') {
          *param_4 = plVar4;
          local_61 = 1;
          break;
        }
      }
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,2);
  return local_61;
}


/* Ghidra address: 0084ddf0 */
/* Ghidra symbol: FUN_0084ddf0 */


void FUN_0084ddf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 byte param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_60 [2];
  undefined1 local_4c [12];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_60[0] = 0;
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (*(char *)(param_1 + 0x524) != '\0') {
    plVar4 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 == '\0') {
      FUN_0084e320(param_1,local_60,param_2,param_3);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x130))
                (*(longlong **)(param_1 + 0x490),&local_38,(int)local_38 + 2,local_38._4_4_ + 2,
                 local_60[0]);
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 4);
      if ((param_5 & 4) == 0) {
        if (((param_5 & 1) == 0) && ((param_5 & 8) == 0)) {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 0x130))
                    (plVar4,local_4c,(&DAT_01e1a740)[*(byte *)(param_1 + 0x55c)]);
        }
        else {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 0x130))
                    (plVar4,local_4c,(&DAT_01e1a743)[*(byte *)(param_1 + 0x55c)]);
        }
      }
      else if ((param_5 & 0x10) == 0) {
        if ((param_5 & 0x20) == 0) {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 0x130))
                    (plVar4,local_4c,(&DAT_01e1a746)[*(byte *)(param_1 + 0x55c)]);
        }
        else {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 0x130))
                    (plVar4,local_4c,(&DAT_01e1a74c)[*(byte *)(param_1 + 0x55c)]);
        }
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 0x130))(plVar4,local_4c,(&DAT_01e1a749)[*(byte *)(param_1 + 0x55c)]);
      }
      FUN_0084e320(param_1,&local_40,param_2,param_3);
      iVar2 = FUN_004230c0(&local_38);
      iVar3 = FUN_005fdfd0(*(undefined8 *)(param_1 + 0x490),local_40);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x130))
                (*(longlong **)(param_1 + 0x490),&local_38,(int)local_38 + 2,
                 local_38._4_4_ + (iVar2 - iVar3) / 2,local_40);
    }
  }
  FUN_0084a0b0(param_1,param_2,param_3,&local_38,param_5);
  FUN_00414480(local_60);
  FUN_00414480(&local_40);
  return;
}


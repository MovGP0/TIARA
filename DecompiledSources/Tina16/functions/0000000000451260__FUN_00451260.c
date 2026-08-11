/* Ghidra address: 00451260 */
/* Ghidra symbol: FUN_00451260 */


undefined1 FUN_00451260(undefined8 param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  code *local_28;
  ushort *local_20;
  int local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = (ushort *)0x0;
  local_30 = 0;
  local_10 = 0;
  if (param_3 == '\0') {
    local_28 = FUN_0043e6b0;
  }
  else {
    local_28 = FUN_0043e740;
  }
  local_44 = FUN_00409d20();
  local_18 = 1;
  if (0 < local_44) {
    do {
      FUN_00409da0(&local_20,local_18);
      cVar2 = FUN_0040f780(param_2,&DAT_00451420,0x20);
      if (cVar2 == '\0') {
        uVar1 = *local_20;
        if (uVar1 < 0x100) {
          bVar3 = (*(byte *)(param_2 + ((longlong)(ulonglong)uVar1 >> 3)) >> ((ulonglong)uVar1 & 7)
                  & 1) != 0;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) goto code_r0x00451329;
      }
      else {
code_r0x00451329:
        FUN_00414480(&local_10);
        local_38 = 0;
        if (local_20 != (ushort *)0x0) {
          local_38 = *(undefined4 *)(local_20 + -2);
        }
        FUN_00416dc0(&local_10,local_20,2,local_38);
        FUN_00414b50(&local_30,local_10);
        FUN_00414480(&local_10);
        cVar2 = (*local_28)(local_30,param_1);
        if (cVar2 != '\0') {
          local_11 = 1;
          goto LAB_004513a9;
        }
      }
      local_18 = local_18 + 1;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  local_11 = 0;
LAB_004513a9:
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  return local_11;
}


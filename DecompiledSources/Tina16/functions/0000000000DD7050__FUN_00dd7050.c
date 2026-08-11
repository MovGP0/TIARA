/* Ghidra address: 00dd7050 */
/* Ghidra symbol: FUN_00dd7050 */


undefined8 FUN_00dd7050(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_30[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_20[0] = 0;
  cVar1 = FUN_00dd7270(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_0041b800(param_2);
    uVar4 = thunk_FUN_04128d11(*(undefined8 *)(param_1 + 0x78),0,uVar3);
    if ((uVar4 & 0x80000000) != 0) {
      FUN_006247d0(param_2,*(undefined8 *)(param_1 + 0x78));
    }
  }
  else if (cVar1 == '\x01') {
    FUN_006247d0(param_2,*(undefined8 *)(param_1 + 0x78));
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_0041b800(param_2);
    uVar2 = thunk_FUN_04128d11(*(undefined8 *)(param_1 + 0x78),0,uVar3);
    if ((uVar2 & 0x80000000) != 0) {
      FUN_0041ddd0(local_30,PTR_PTR_02004f40);
      FUN_00624690(&local_58,*(undefined8 *)(param_1 + 0x78));
      local_50 = local_58;
      local_48 = 0x11;
      FUN_006245d0(&local_60,*(undefined8 *)(param_1 + 0x78));
      local_40 = local_60;
      local_38 = 0x11;
      FUN_00442f70(local_20,local_30[0],&local_50,1);
      uVar3 = FUN_006242c0(&PTR_FUN_00620998,1,local_20[0],uVar2,0);
      FUN_004134c0(uVar3);
    }
  }
  else if (cVar1 == '\x03') {
    FUN_004168e0(&local_68,*(undefined8 *)(param_1 + 0x98));
    FUN_00624960(param_2,local_68,*(undefined8 *)(param_1 + 0x78));
  }
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return param_2;
}


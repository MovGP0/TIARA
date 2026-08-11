/* Ghidra address: 007240b0 */
/* Ghidra symbol: FUN_007240b0 */


void FUN_007240b0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30 [2];
  undefined2 local_1a;
  
  local_30[0] = 0;
  local_1a = 0;
  if (((*(uint *)(param_1 + 0xd8) & 0x40) != 0) &&
     (((*(uint *)(param_1 + 0xd8) & 0x10000) != 0 || (*PTR_DAT_02003210 == '\0')))) {
    local_1a = 0x20;
  }
  local_38 = param_2;
  if ((*(uint *)(param_1 + 0xd8) & 0x40) == 0) {
    FUN_00723ed0(auStack_58,*(undefined8 *)(param_2 + 0x30),param_1 + 0x108);
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x78))
              (*(longlong **)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x108));
  }
  else {
    FUN_00723f50(auStack_58,*(undefined8 *)(param_2 + 0x30));
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x18))
              (*(longlong **)(param_1 + 0x110),local_30,0);
    FUN_00414ad0(param_1 + 0x108,local_30[0]);
  }
  FUN_00414480(local_30);
  return;
}


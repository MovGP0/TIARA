/* Ghidra address: 0180e880 */
/* Ghidra symbol: FUN_0180e880 */


void FUN_0180e880(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4,char param_5,
                 undefined8 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined8 uStack_34;
  int local_2c;
  
  local_3c = *param_2;
  uStack_34 = param_2[1];
  FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),param_3);
  FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
  FUN_005fd4e0(*(undefined8 *)(param_1 + 0x78),param_3);
  FUN_005fd670(*(undefined8 *)(param_1 + 0x78),0);
  FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),1);
  local_2c = 1;
  if (param_5 != '\0') {
    local_2c = -1;
  }
  FUN_00423b10(&local_3c,-param_8,-param_8);
  iVar1 = param_7 * 2 * -local_2c;
  if (0 < param_9) {
    do {
      FUN_0180e4b0(auStack_68,&local_3c);
      if (param_4 == '\0') {
        FUN_00423b50(&local_3c,iVar1,0);
      }
      else {
        FUN_00423b50(&local_3c,0,iVar1);
      }
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return;
}


/* Ghidra address: 00d82290 */
/* Ghidra symbol: FUN_00d82290 */


void FUN_00d82290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  if ((char)local_2c == '\0') {
    local_2c._1_1_ = (char)((uint)local_2c >> 8);
    if (local_2c._1_1_ == '\x03') {
      FUN_00d57cd0(param_3,&local_3c,0xffffff);
    }
    else if (local_2c._1_1_ == '\x02') {
      FUN_00d57cd0(param_3,&local_3c,0x808080);
    }
    else if (local_2c._1_1_ == '\x01') {
      FUN_00d57cd0(param_3,&local_3c,0xffff);
    }
    else {
      FUN_00d57cd0(param_3,&local_3c,0xc0c0c0);
    }
    FUN_00d57d20(param_3,&local_3c,0xff);
  }
  else if ((char)local_2c == '\x01') {
    iVar1 = FUN_004230c0(&local_3c);
    FUN_00423b10(&local_3c,0xfffffffd,-(iVar1 / 2));
    FUN_00d57cd0(param_3,&local_3c,0xff);
  }
  return;
}


/* Ghidra address: 00ad7620 */
/* Ghidra symbol: FUN_00ad7620 */


char FUN_00ad7620(undefined8 param_1,ushort *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  char local_42;
  char local_41;
  ushort *local_40;
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_50 = auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00460ba0(&local_30);
  FUN_00460b80(&local_30);
  local_41 = FUN_0046f320(param_2,&local_30);
  FUN_00460ba0(&local_30);
  if (local_41 == '\0') {
    if (*param_2 < 0x20) {
      bVar2 = (1 << ((byte)*param_2 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar2 = false;
    }
    local_40 = param_2;
    if (bVar2) {
      FUN_00468530(&local_68,0xff439eb2,0xfffffffffffffffc);
      cVar1 = FUN_0046f320(param_2,&local_68);
      if (cVar1 != '\0') {
        local_42 = '\x01';
        goto LAB_00ad7702;
      }
    }
    local_42 = '\0';
  }
  else {
    local_42 = '\x01';
  }
LAB_00ad7702:
  local_31 = param_3;
  if (local_42 == '\0') {
    local_31 = FUN_00462650(param_2);
    if (local_31 == '\x02') {
      local_31 = '\x03';
    }
    else if (local_31 == '\x03') {
      local_31 = '\x02';
    }
  }
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_30);
  return local_31;
}


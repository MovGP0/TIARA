/* Ghidra address: 01500620 */
/* Ghidra symbol: FUN_01500620 */


undefined1 FUN_01500620(char param_1)

{
  undefined8 uVar1;
  undefined1 auStack_298 [40];
  undefined1 *local_270;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_32;
  char local_31;
  char local_19;
  
  local_270 = auStack_298;
  local_50 = 0;
  *PTR_DAT_02002ce0 = 0;
  local_19 = '\0';
  local_31 = FUN_015005c0(param_1,&local_40,&local_48,&local_50);
  local_32 = FUN_014fd2d0();
  if (local_32 != '\0') {
    DAT_0210ec08 = FUN_014fdd10(&PTR_FUN_014fc148,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_01500530(DAT_0210ec08,local_40,local_48,local_50);
    uVar1 = FUN_019a4600();
    FUN_019af390(uVar1,0xd,1,0);
    FUN_014fe830(DAT_0210ec08);
    if (param_1 == '\0') {
      FUN_008059a0(DAT_0210ec08);
    }
    else {
      FUN_014ffa60(DAT_0210ec08,*(undefined8 *)(DAT_0210ec08 + 0x6f0));
    }
  }
  if (((local_19 == '\0') && (local_32 != '\0')) && (local_31 != '\0')) {
    local_19 = 0;
  }
  else {
    local_19 = 1;
  }
  FUN_00414480(&local_50);
  return local_19;
}


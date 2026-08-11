/* Ghidra address: 018719b0 */
/* Ghidra symbol: FUN_018719b0 */


void FUN_018719b0(void)

{
  undefined8 uVar1;
  undefined1 local_50 [8];
  undefined **local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined **local_38;
  undefined **local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined **local_20;
  undefined **local_18;
  undefined **local_10;
  
  DAT_02110518 = DAT_02110518 + -1;
  if (DAT_02110518 == -1) {
    uVar1 = FUN_0197c220();
    local_20 = &PTR_FUN_0186f038;
    local_18 = &PTR_FUN_0186e8a0;
    local_10 = &PTR_FUN_01871bd0;
    local_28 = 2;
    local_27 = 3;
    local_26 = 3;
    local_25 = 2;
    FUN_0197ec60(uVar1,&PTR_FUN_01927248,&local_20,2,&local_28,3);
    uVar1 = FUN_0197c220();
    local_38 = &PTR_FUN_0186f038;
    local_30 = &PTR_FUN_01871bd0;
    local_40 = 2;
    local_3f = 3;
    FUN_0197ec60(uVar1,&PTR_FUN_01929d50,&local_38,1,&local_40,1);
    uVar1 = FUN_0197c220();
    local_48 = &PTR_FUN_0186f470;
    local_50[0] = 2;
    FUN_0197ec60(uVar1,&PTR_FUN_0192ed70,&local_48,0,local_50,0);
  }
  return;
}


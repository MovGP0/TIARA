/* Ghidra address: 0157ed80 */
/* Ghidra symbol: FUN_0157ed80 */


void FUN_0157ed80(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  DAT_0210eea0 = DAT_0210eea0 + -1;
  if (DAT_0210eea0 == -1) {
    lVar1 = FUN_00410e60(&DAT_0157ec18,1);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1 + 0x10;
    }
    FUN_0041b840(local_20,lVar2);
    DAT_0210ee78 = FUN_01583d90(&PTR_FUN_0157a310,1,0);
    if (lVar1 == 0) {
      lVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1 + 0x30;
      lVar3 = lVar1 + 0x28;
    }
    FUN_0157eee0(&PTR_FUN_01576b50,0,lVar2,lVar3);
    if (lVar1 == 0) {
      lVar1 = 0;
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1 + 0x20;
      lVar1 = lVar1 + 0x18;
    }
    FUN_0157eee0(&PTR_FUN_01576b50,8,lVar2,lVar1);
  }
  FUN_0041b800(local_20);
  return;
}


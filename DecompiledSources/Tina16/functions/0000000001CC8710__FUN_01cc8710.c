/* Ghidra address: 01cc8710 */
/* Ghidra symbol: FUN_01cc8710 */


ulonglong FUN_01cc8710(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_01cc8330();
  uVar2 = FUN_00c44470(uVar1,0xc059000000000000);
  return uVar2 ^ 0x8000000000000000;
}


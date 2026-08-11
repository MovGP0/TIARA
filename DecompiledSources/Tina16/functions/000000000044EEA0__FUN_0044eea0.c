/* Ghidra address: 0044eea0 */
/* Ghidra symbol: FUN_0044eea0 */


void FUN_0044eea0(void)

{
  undefined8 uVar1;
  undefined1 auStack_28 [32];
  
  uVar1 = DAT_0200c680;
  LOCK();
  DAT_0200c680 = 0;
  UNLOCK();
  FUN_0044ede0(auStack_28,uVar1);
  uVar1 = DAT_0200c888;
  LOCK();
  DAT_0200c888 = 0;
  UNLOCK();
  FUN_0044ede0(auStack_28,uVar1);
  FUN_0044ee20(auStack_28,&DAT_0200c688,0x1f);
  return;
}


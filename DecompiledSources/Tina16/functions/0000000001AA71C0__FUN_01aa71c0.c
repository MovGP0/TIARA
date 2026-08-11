/* Ghidra address: 01aa71c0 */
/* Ghidra symbol: FUN_01aa71c0 */


void FUN_01aa71c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  uVar1 = FUN_01d01370(*(undefined8 *)(param_1 + 0x550));
  lVar2 = FUN_01cfde70(uVar1,2,1,local_19,&local_1a,&local_1b);
  uVar1 = FUN_013a59f0(&DAT_013a5758,1,*(undefined8 *)(lVar2 + 8));
  *(undefined8 *)(param_1 + 0x558) = uVar1;
  return;
}


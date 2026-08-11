/* Ghidra address: 015697f0 */
/* Ghidra symbol: FUN_015697f0 */


bool FUN_015697f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  
  lVar3 = FUN_01571ee0(*(undefined8 *)(param_2 + 0x28),param_3);
  uVar2 = FUN_00e14780(*(undefined8 *)(param_1 + 0x9c8),*(undefined4 *)(lVar3 + 0x30));
  cVar1 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),uVar2,2,local_28,local_1c,0);
  return cVar1 != '\0';
}


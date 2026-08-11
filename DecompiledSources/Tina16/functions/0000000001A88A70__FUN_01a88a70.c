/* Ghidra address: 01a88a70 */
/* Ghidra symbol: FUN_01a88a70 */


void FUN_01a88a70(longlong param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*param_3 == 0xd) {
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcd8));
    local_28 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcd0));
    cVar1 = FUN_01ac3630(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0xf0),&local_20,&local_28)
    ;
    if (cVar1 == '\0') {
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcd8));
      FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,uVar2);
    }
    else {
      FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,local_20);
    }
    *param_3 = 0;
  }
  return;
}


/* Ghidra address: 01d82a90 */
/* Ghidra symbol: FUN_01d82a90 */


void FUN_01d82a90(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  lVar1 = *(longlong *)(param_1 + 0xae0);
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x98))
            (*(longlong **)(param_1 + 0xa88),local_40,&local_48,&local_50);
  if (param_2 == '\0') {
    *(double *)(lVar1 + 0x110) = *(double *)(lVar1 + 0x110) - local_50;
  }
  else if (param_2 == '\x01') {
    *(double *)(lVar1 + 0x110) = *(double *)(lVar1 + 0x110) + local_50;
  }
  uVar2 = FUN_010bfdb0(lVar1 + 0x110,4);
  uVar2 = FUN_00b90660(uVar2,local_40[0],local_48);
  *(undefined8 *)(lVar1 + 0x110) = uVar2;
  dVar3 = (double)FUN_0040c850(*(undefined8 *)(lVar1 + 0x110));
  if (dVar3 < local_50 / 2.0) {
    *(undefined8 *)(lVar1 + 0x110) = 0;
  }
  if (param_3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x90))
              (*(longlong **)(param_1 + 0xa88),*(undefined8 *)(lVar1 + 0x110));
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x88))(*(longlong **)(param_1 + 0xa88));
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0xa28),*(undefined8 *)(lVar1 + 0x110));
  return;
}


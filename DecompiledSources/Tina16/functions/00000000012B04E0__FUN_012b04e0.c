/* Ghidra address: 012b04e0 */
/* Ghidra symbol: FUN_012b04e0 */


void FUN_012b04e0(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x98))
            (*(longlong **)(param_1 + 0xdb8),local_40,&local_48,&local_50);
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
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x90))
              (*(longlong **)(param_1 + 0xdb8),*(undefined8 *)(lVar1 + 0x110));
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x88))(*(longlong **)(param_1 + 0xdb8));
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0xd38),*(undefined8 *)(lVar1 + 0x110));
  return;
}


/* Ghidra address: 0129d830 */
/* Ghidra symbol: FUN_0129d830 */


undefined8 FUN_0129d830(longlong param_1)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  double local_46;
  undefined8 local_3e;
  undefined8 local_36;
  double local_2e;
  int local_1c;
  undefined1 local_17;
  undefined1 local_e;
  char local_9;
  
  local_58 = param_1;
  FUN_00417580(&local_46,&DAT_01d0ba10);
  FUN_00417c40(&local_46,local_58 + 0x8c0,&DAT_01d0ba10);
  if (local_2e <= 0.0) {
    *(undefined8 *)(local_58 + 0x2b0) = 0;
    if ((local_9 == '\0') || (local_9 == '\x01')) {
      *(double *)(local_58 + 0x2b8) = ((double)local_1c * 1.0001) / local_46;
    }
    else {
      uVar3 = FUN_0129d7a0(auStack_78);
      *(undefined8 *)(local_58 + 0x2b8) = uVar3;
    }
  }
  else if ((local_9 == '\0') || (local_9 == '\x01')) {
    *(double *)(local_58 + 0x2b0) = local_2e * 0.9999;
    *(double *)(local_58 + 0x2b8) = (double)local_1c / local_46 + local_2e * 1.0001;
  }
  else {
    *(double *)(local_58 + 0x2b0) = local_2e;
    dVar2 = (double)FUN_0129d7a0(auStack_78);
    *(double *)(local_58 + 0x2b8) = dVar2 + local_2e;
  }
  *(undefined1 *)(local_58 + 0x2ad) = local_17;
  *(undefined1 *)(local_58 + 0x2ac) = 0;
  *(double *)(local_58 + 0x3f9) = local_46;
  *(undefined8 *)(local_58 + 0x401) = local_3e;
  *(double *)(local_58 + 0x3e9) = local_2e;
  *(double *)(local_58 + 0x3f1) = (double)local_1c / local_46 + local_2e;
  *(undefined8 *)(local_58 + 0x409) = local_36;
  FUN_00c42780(0x4000000000000000,
               *(double *)(local_58 + 0x401) *
               (*(double *)(local_58 + 0x3f1) - *(double *)(local_58 + 0x3e9)));
  cVar1 = FUN_0040c840();
  *(char *)(local_58 + 1000) = cVar1 + '\x02';
  *(undefined1 *)(local_58 + 0x412) = local_e;
  local_50 = *(undefined8 *)(local_58 + 0x2b8);
  FUN_00417740(&local_46,&DAT_01d0ba10);
  return local_50;
}


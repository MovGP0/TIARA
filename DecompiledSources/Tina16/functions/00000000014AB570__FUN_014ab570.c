/* Ghidra address: 014ab570 */
/* Ghidra symbol: FUN_014ab570 */


void FUN_014ab570(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  char local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  undefined8 local_32;
  undefined2 uStack_2a;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_32,10);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(lVar2 + 0xa2d) = local_32;
      *(undefined2 *)(lVar2 + 0xa35) = uStack_2a;
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_3d,0xb);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      if (*(char *)(lVar2 + 0x495) == '\x03') {
        *(char *)(lVar2 + 0x495) = local_3d + '\x02';
      }
      *(undefined1 *)(lVar2 + 0xa2d) = local_3c;
      *(undefined1 *)(lVar2 + 0xa2e) = local_3b;
      *(undefined2 *)(lVar2 + 0xa2f) = local_3a;
      *(undefined2 *)(lVar2 + 0xa31) = local_38;
      *(undefined4 *)(lVar2 + 0xa33) = local_36;
    }
  }
  return;
}


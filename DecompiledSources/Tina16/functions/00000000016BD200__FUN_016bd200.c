/* Ghidra address: 016bd200 */
/* Ghidra symbol: FUN_016bd200 */


void FUN_016bd200(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 local_11c [4];
  undefined1 local_118;
  char local_117;
  
  FUN_016ba960(param_1,&local_118,0,&DAT_016bd324,&DAT_016bd328,0);
  puVar3 = &local_118;
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9b8),puVar3,local_11c);
  if (cVar1 == '\0') {
    if ((byte)(local_117 + 0xb8U) < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)puVar3 >> 0x10),1) << (local_117 + 0xb8U & 0x1f) &
              0x20c0U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar2 = FUN_016bce40(&PTR_FUN_016b3548,1,&local_118);
      *param_2 = uVar2;
      *(undefined1 *)(param_1 + 0x9a8) = 1;
    }
    else {
      uVar2 = FUN_016bcb30(&PTR_FUN_016b3308,1,&local_118);
      *param_2 = uVar2;
      *(bool *)(param_1 + 0x9a7) =
           (byte)(local_117 - 0x40U) < 0x20 && (1 << (local_117 - 0x40U & 0x1f) & 0xde3ffcU) != 0;
    }
    FUN_016bd1e0(param_1,*param_2);
  }
  else {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xf,&local_118,0xffffffff);
  }
  return;
}


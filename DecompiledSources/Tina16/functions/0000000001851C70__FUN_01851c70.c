/* Ghidra address: 01851c70 */
/* Ghidra symbol: FUN_01851c70 */


void FUN_01851c70(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(char *)(param_1 + 0x19) != '\0') goto code_r0x01851e3f;
  bVar1 = *(byte *)(param_1 + 0x48);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      sVar2 = FUN_0046c220(param_2);
      if (sVar2 == 7) {
        FUN_0046c250(&local_78,param_2,7);
        FUN_00461840(param_1 + 0x60,&local_78);
      }
      else {
        FUN_0046c250(&local_90,param_2,5);
        FUN_00461840(param_1 + 0x60,&local_90);
      }
      goto code_r0x01851e3f;
    }
    if (bVar1 == 0) {
      FUN_0046c250(&local_30,param_2,3);
      FUN_00461840(param_1 + 0x60,&local_30);
      goto code_r0x01851e3f;
    }
    if (bVar1 == 1) {
      FUN_0046c250(&local_60,param_2,0xb);
      FUN_00461840(param_1 + 0x60,&local_60);
      goto code_r0x01851e3f;
    }
  }
  else {
    if (bVar1 == 4) {
      FUN_0046c250(&local_a8,param_2,0x102);
      FUN_00461840(param_1 + 0x60,&local_a8);
      goto code_r0x01851e3f;
    }
    if (bVar1 == 10) {
      FUN_0046c250(&local_48,param_2,0x14);
      FUN_00461840(param_1 + 0x60,&local_48);
      goto code_r0x01851e3f;
    }
  }
  FUN_00461840(param_1 + 0x60,param_2);
code_r0x01851e3f:
  FUN_00417840(&local_a8,&DAT_004013d8,6);
  return;
}


/* Ghidra address: 00f59920 */
/* Ghidra symbol: FUN_00f59920 */


void FUN_00f59920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff00;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 local_a8 [40];
  longlong local_80;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined8 local_70 [10];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_70[0] = 0;
  FUN_016ea450(local_a8,param_1,1);
  FUN_004169a0(local_70,local_a8);
  uVar1 = FUN_016ebdc0(param_1);
  puVar7 = (undefined1 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff00 >> 8),1);
  lVar2 = FUN_01b08260(param_2,uVar1,local_70[0],&DAT_01eff164,CONCAT44(uVar6,2),puVar7);
  if (lVar2 == 0) {
    uVar1 = 0x412e848000000000;
    uVar5 = 0x3ff0000000000000;
    cVar4 = '\0';
  }
  else {
    puVar3 = (undefined8 *)FUN_01b05ad0(lVar2,1,3,&local_71,&local_72,&local_73);
    uVar1 = *puVar3;
    puVar7 = &local_73;
    puVar3 = (undefined8 *)FUN_01b05ad0(lVar2,1,4,&local_71,&local_72,puVar7);
    uVar5 = *puVar3;
    cVar4 = *(char *)(lVar2 + 5) + '\x02';
  }
  FUN_016ee260(param_1,&local_80,0x110,0);
  uVar8 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_00f572f0(param_1,param_2,1,3,cVar4,uVar8,lVar2,0,0x4008000000000000,0x4000000000000000,uVar1,
               uVar5,local_80);
  FUN_00f572f0(param_1,param_2,2,3,cVar4,uVar8 & 0xffffffffffffff00,lVar2,0,0x4000000000000000,
               0x4008000000000000,uVar1,uVar5,local_80 + 0x88);
  if (lVar2 != 0) {
    FUN_016e9f40(param_1,FUN_00f58890);
  }
  FUN_00414480(local_70);
  return;
}


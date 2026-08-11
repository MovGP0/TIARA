/* Ghidra address: 01cfff60 */
/* Ghidra symbol: FUN_01cfff60 */


void FUN_01cfff60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59 [57];
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0xbe);
  pcVar4 = (char *)FUN_01cfde70(param_1,1,0,&local_5b,&local_5a,local_59);
  uVar7 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),'\x01' - *pcVar4) & 0xffffffff;
  puVar5 = (undefined8 *)FUN_01cfde70(param_1,2,0,&local_5b,&local_5a,local_59);
  uVar6 = *puVar5;
  puVar5 = (undefined8 *)FUN_01cfde70(param_1,3,0,&local_5b,&local_5a,local_59);
  uVar1 = *puVar5;
  puVar5 = (undefined8 *)FUN_01cfde70(uVar3,1,0,&local_5b,&local_5a,local_59);
  uVar2 = *puVar5;
  puVar5 = (undefined8 *)FUN_01cfde70(uVar3,3,0,&local_5b,&local_5a,local_59);
  if ((char)uVar7 == '\x01') {
    *puVar5 = uVar6;
  }
  else {
    *puVar5 = uVar1;
  }
  uVar6 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
  FUN_01d3aad0(uVar6,0,uVar7);
  FUN_01539ae0(uVar3,uVar2,uVar6);
  return;
}


/* Ghidra address: 01c88020 */
/* Ghidra symbol: FUN_01c88020 */


void FUN_01c88020(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39 [33];
  
  if (*(longlong *)(param_1 + 0x1838) != 0) {
    puVar4 = (undefined8 *)
             FUN_01cfde70(*(longlong *)(param_1 + 0x1838),3,0,local_39,&local_3a,&local_3b);
    uVar1 = *puVar4;
    puVar4 = (undefined8 *)
             FUN_01cfde70(*(undefined8 *)(param_1 + 0x1838),4,0,local_39,&local_3a,&local_3b);
    uVar2 = *puVar4;
    psVar5 = (short *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x1838),7,0,local_39,&local_3a,
                                   &local_3b);
    sVar3 = *psVar5;
    FUN_01cfde70(*(undefined8 *)(param_1 + 0x1838),8,0,local_39,&local_3a,&local_3b);
    FUN_0153b430(uVar1,uVar2,(int)sVar3,1,0);
  }
  return;
}


/* Ghidra address: 01aa80b0 */
/* Ghidra symbol: FUN_01aa80b0 */


undefined1 FUN_01aa80b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10 + (longlong)param_2 * 8) + 0x550);
  uVar4 = FUN_01aa8090();
  if ((short)uVar4 == 0x45d) {
    uVar3 = 2;
  }
  else {
    cVar2 = FUN_01d3d530(uVar4);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      puVar5 = (undefined1 *)FUN_01cfde70(uVar1,1,3,local_19,&local_1a,&local_1b);
      uVar3 = *puVar5;
    }
  }
  return uVar3;
}


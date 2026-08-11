/* Ghidra address: 01d6c650 */
/* Ghidra symbol: FUN_01d6c650 */


void FUN_01d6c650(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined2 local_44;
  undefined1 local_42;
  char local_41;
  double local_40 [4];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee1f0(param_1,&local_44,3);
    dVar2 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),1,local_42,0);
    local_41 = (char)local_44 == '\0';
    local_50 = local_44;
    uStack_4e = local_42;
    dVar3 = (double)FUN_01d6c510(dVar2,&local_50,&local_41,local_40);
    FUN_016ed320(param_1,1,dVar3 - dVar2 * local_40[0],local_40[0],0);
    if (local_41 == '\0') {
      FUN_016eabc0(param_1,1,1);
    }
    else {
      FUN_016eabc0(param_1,1,0);
    }
    local_44 = CONCAT11(local_44._1_1_,local_41 == '\0');
    FUN_016ea050(param_1,&local_44,3);
  }
  return;
}


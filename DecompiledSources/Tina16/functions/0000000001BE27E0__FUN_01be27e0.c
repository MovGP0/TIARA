/* Ghidra address: 01be27e0 */
/* Ghidra symbol: FUN_01be27e0 */


void FUN_01be27e0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_40 [2];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  FUN_00742eb0(param_1[0xca],0);
  if (((param_1[0xb0] != 0) && (*(longlong *)(param_1[0xb0] + 0x78) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1[0xb0] + 800) + 0x30) == 0)) {
    while ((iVar2 = FUN_00611650(*(undefined8 *)(param_1[0xba] + 0x648)), 1 < iVar2 &&
           (lVar3 = FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648)),
           lVar3 != *(longlong *)(param_1[0xb0] + 0x78)))) {
      FUN_01be0920(*(undefined8 *)(param_1[0xba] + 0x648));
    }
    thunk_FUN_03cc0d62(local_20);
    FUN_0064d000(param_1[0xb0],local_30);
    uVar4 = FUN_01be0910(param_1[0xc9]);
    local_40[0] = FUN_0064d3a0(uVar4,local_20);
    cVar1 = FUN_00423210(local_30,local_40);
    if (cVar1 != '\0') {
      uVar4 = FUN_01be0910(param_1[0xc9]);
      (**(code **)(*param_1 + 0x3a0))(param_1,uVar4,param_1[0xb0]);
    }
  }
  return;
}


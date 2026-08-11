/* Ghidra address: 01bf67c0 */
/* Ghidra symbol: FUN_01bf67c0 */


int FUN_01bf67c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  int local_1c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_1c = 0;
  if (*param_1 != 0) {
    local_1c = (int)*(undefined8 *)(*param_1 + -8);
  }
  if (param_2 != 0) {
    iVar1 = FUN_005b4540(param_2);
    FUN_00419260(param_1,&DAT_01bf6778,1,(longlong)(local_1c + iVar1));
    iVar1 = FUN_005b4540();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_005b4350(param_2,iVar5);
        iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0xb8),local_res18[0]);
        if (iVar2 == 0) {
          uVar4 = FUN_005b4350(param_2,iVar5);
          *(undefined8 *)(*param_1 + (longlong)local_1c * 8) = uVar4;
          local_1c = local_1c + 1;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00419260(param_1,&DAT_01bf6778,1,(longlong)local_1c);
  }
  FUN_00414480(local_res18);
  return local_1c;
}


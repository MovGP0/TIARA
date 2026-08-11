/* Ghidra address: 01c6d050 */
/* Ghidra symbol: FUN_01c6d050 */


void FUN_01c6d050(longlong param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
    if ((plVar3 != (longlong *)0x0) && ((undefined **)*plVar3 == &PTR_FUN_01cf10a8)) {
      FUN_0041ddd0(local_30,PTR_PTR_020044e0);
      local_38 = plVar3;
      uVar4 = FUN_017baf50(&local_38,0);
      plVar5 = (longlong *)
               FUN_017baeb0(&PTR_FUN_017ba830,local_30[0],*(undefined8 *)(param_1 + 0x27a8),uVar4);
      uVar2 = FUN_017bf3d0(plVar3);
      if (param_2 == '\0') {
        iVar6 = (uVar2 & 0xff) + 1;
      }
      else {
        iVar6 = (uVar2 & 0xff) - 1;
      }
      if (iVar6 < 0) {
        iVar6 = 3;
      }
      if (3 < iVar6) {
        iVar6 = 0;
      }
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_017bf210(plVar3,uVar4,(longlong)iVar6 % 2 & 0xffffffff);
      FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_00414480(local_30);
  return;
}


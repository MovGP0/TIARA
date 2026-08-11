/* Ghidra address: 00a95a20 */
/* Ghidra symbol: FUN_00a95a20 */


undefined8 FUN_00a95a20(longlong param_1,undefined8 param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_3a;
  char local_39 [9];
  
  uVar5 = 0;
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x198) == *(longlong *)PTR_DAT_02001ae8) {
    uVar5 = 1;
    if (param_3 == '\0') {
      plVar3 = (longlong *)
               FUN_00aa81b0(*(undefined8 *)(param_1 + 0x18),param_2,param_1 + 0x1a8,local_39,
                            &local_3a);
      if (plVar3 == (longlong *)0x0) {
        return 1;
      }
      cVar2 = (**(code **)(*plVar3 + 0x88))(plVar3);
      if (cVar2 == '\0') {
        *(longlong **)(param_1 + 0x198) = plVar3;
      }
      else {
        if (local_39[0] == '\0') {
          *(longlong **)(param_1 + 0x198) = plVar3;
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
          *(undefined8 *)(param_1 + 0x198) = uVar4;
        }
        if (*(char *)(param_1 + 0x1aa) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x198) + 0x30))(*(longlong **)(param_1 + 0x198),1);
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c0),
                       *(undefined8 *)(param_1 + 0x198));
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x228);
          if (lVar1 != 0) {
            FUN_00742eb0(lVar1,1);
          }
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x198) + 0x30))(*(longlong **)(param_1 + 0x198),0);
        }
      }
      *(longlong **)(param_1 + 0x1a0) = plVar3;
    }
    else {
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)PTR_DAT_02003010;
    }
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      *param_4 = 1;
    }
  }
  return uVar5;
}


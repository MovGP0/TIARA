/* Ghidra address: 0135c550 */
/* Ghidra symbol: FUN_0135c550 */


void FUN_0135c550(undefined8 param_1,longlong param_2,undefined1 param_3,char param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  short sVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49 [41];
  undefined4 uVar9;
  
  local_58 = 0;
  if (param_4 == '\x01') {
    iVar6 = *(int *)(param_2 + 0x2d8);
    iVar5 = 1;
    if (0 < iVar6) {
      do {
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar5 * 8) + 0x128)
        ;
        sVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if (sVar3 == 0x65) {
          FUN_017ff4f0(plVar2,&local_58);
          puVar8 = &local_4b;
          puVar4 = (undefined8 *)FUN_01cfde70(plVar2,1,0,local_49,&local_4a,puVar8);
          uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
          uVar1 = *puVar4;
          uVar7 = FUN_016ed7b0(param_2,param_3);
          FUN_017d13d0(local_68,param_2,0,plVar2,1,CONCAT44(uVar9,2),1,1,1);
          FUN_017d13d0(local_78,param_2,0,plVar2,1,3,1,1,1);
          FUN_0135c030(param_1,local_58,uVar1,uVar7,local_68[0],local_78[0]);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414480(&local_58);
  return;
}


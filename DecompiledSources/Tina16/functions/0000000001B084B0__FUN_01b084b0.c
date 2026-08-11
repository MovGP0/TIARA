/* Ghidra address: 01b084b0 */
/* Ghidra symbol: FUN_01b084b0 */


void FUN_01b084b0(longlong param_1,longlong *param_2,int param_3,double param_4,double param_5,
                 char param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_20;
  
  local_20 = 0;
  if (((param_6 != '\0') && (param_5 < param_4)) || ((param_6 == '\0' && (param_4 < param_5)))) {
    iVar5 = 0;
    while( true ) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x28))
                        (*(longlong **)(param_1 + 0x5c8));
      if (iVar1 <= iVar5) break;
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x30))
                         (*(longlong **)(param_1 + 0x5c8),iVar5);
      if ((param_2 == (longlong *)*plVar2) && (param_3 == (int)plVar2[1])) break;
      iVar5 = iVar5 + 1;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x28))(*(longlong **)(param_1 + 0x5c8));
    if (iVar5 < iVar1) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x30))
                        (*(longlong **)(param_1 + 0x5c8),iVar5);
      if (((param_6 != '\0') &&
          (*(double *)(lVar3 + 0x18) <= param_4 && param_4 != *(double *)(lVar3 + 0x18))) ||
         ((param_6 == '\0' && (param_4 < *(double *)(lVar3 + 0x18))))) {
        *(double *)(lVar3 + 0x18) = param_4;
      }
    }
    else {
      puVar4 = (undefined8 *)FUN_004095c0(0x28);
      *puVar4 = param_2;
      *(int *)(puVar4 + 1) = param_3;
      puVar4[3] = param_4;
      puVar4[2] = param_5;
      *(undefined1 *)(puVar4 + 4) = 0;
      (**(code **)(*param_2 + 0x288))(param_2,&local_20);
      FUN_00416ad0(&local_20,&LAB_01b08694);
      (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x80))
                (*(longlong **)(param_1 + 0x5c8),local_20,puVar4);
    }
  }
  FUN_00414480(&local_20);
  return;
}


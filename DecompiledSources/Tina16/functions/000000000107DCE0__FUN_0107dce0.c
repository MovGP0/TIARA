/* Ghidra address: 0107dce0 */
/* Ghidra symbol: FUN_0107dce0 */


void FUN_0107dce0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x90))(*(longlong **)(param_1 + 0xb68));
  cVar1 = FUN_00f81d30(*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 == '\0') {
    cVar1 = FUN_00f81d60(*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 == '\0') {
      FUN_0107ba70(param_1,1);
    }
    else {
      FUN_00414480(local_30);
      FUN_010ae170(&local_48);
      FUN_00414b50(&local_38,L"mcc18");
      FUN_00414480(&local_40);
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xac8) + 0x18) + 0x10);
      iVar3 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar2 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),iVar3);
          cVar1 = FUN_010af9d0(lVar2);
          if (cVar1 == '\0') {
            FUN_00414b50(local_30,*(undefined8 *)(lVar2 + 0x30));
            FUN_004414c0(&local_50,*(undefined8 *)(lVar2 + 0x30),&DAT_0107e17c);
            FUN_00416cd0(&local_40,4,local_40,&DAT_0107e16c,local_50,&DAT_0107e190);
            FUN_0107a920(param_1,&local_58,*(undefined8 *)(param_1 + 0xb38));
            FUN_00416cd0(param_1 + 0xb00,10,local_38,&DAT_0107e1a4,&DAT_0107e1b4,local_58,
                         &DAT_0107e1a4,&DAT_0107e16c,local_30[0],&DAT_0107e16c,&DAT_0107e1a4,
                         L"-D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-");
            (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x78))
                      (*(longlong **)(param_1 + 0xb68),*(undefined8 *)(param_1 + 0xb00));
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_0107a920(param_1,&local_60,*(undefined8 *)(param_1 + 0xb38));
      FUN_00416cd0(param_1 + 0xb00,0xe,L"mplink /p",local_60,&DAT_0107e1a4,&DAT_0107e250,local_48,
                   L"\\lib\"",&DAT_0107e1a4,local_40,&DAT_0107e1a4,
                   L"/u_CRUNTIME /u_DEBUG /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1",&DAT_0107e1a4,
                   &DAT_0107e2fc,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".cof\"");
      (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x78))
                (*(longlong **)(param_1 + 0xb68),*(undefined8 *)(param_1 + 0xb00));
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x78))(*(longlong **)(param_1 + 0xb68),L"make");
  }
  FUN_00416cd0(&local_68,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0107e328,L"c1.bat");
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x100))(*(longlong **)(param_1 + 0xb68),local_68);
  FUN_00414560(&local_68,8);
  return;
}


/* Ghidra address: 0096b960 */
/* Ghidra symbol: FUN_0096b960 */


undefined8 FUN_0096b960(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00416420(param_2,0);
  if (iVar1 == 0) {
    *param_3 = 7;
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416420(param_2,L"CDATA");
    if (iVar1 == 0) {
      *param_3 = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_00416420(param_2,&DAT_0096ba98);
      if (iVar1 == 0) {
        *param_3 = 2;
        uVar2 = 1;
      }
      else {
        iVar1 = FUN_00416420(param_2,L"IDREF");
        if (iVar1 == 0) {
          *param_3 = 3;
          uVar2 = 1;
        }
        else {
          iVar1 = FUN_00416420(param_2,L"IDREFS");
          if (iVar1 == 0) {
            *param_3 = 4;
            uVar2 = 1;
          }
          else {
            iVar1 = FUN_00416420(param_2,L"ENTITY");
            if (iVar1 == 0) {
              *param_3 = 5;
              uVar2 = 1;
            }
            else {
              iVar1 = FUN_00416420(param_2,L"ENTITIES");
              if (iVar1 == 0) {
                *param_3 = 6;
                uVar2 = 1;
              }
              else {
                iVar1 = FUN_00416420(param_2,L"NMTOKEN");
                if (iVar1 == 0) {
                  *param_3 = 7;
                  uVar2 = 1;
                }
                else {
                  iVar1 = FUN_00416420(param_2,L"NMTOKENS");
                  if (iVar1 == 0) {
                    *param_3 = 8;
                    uVar2 = 1;
                  }
                  else {
                    iVar1 = FUN_00416420(param_2,L"NOTATION");
                    if (iVar1 == 0) {
                      *param_3 = 1;
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

